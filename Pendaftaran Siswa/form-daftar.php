<!DOCTYPE html>
<html>
    <head>
        <title>Formulir Pendaftaran Siswa Baru | SMK Coding</title>
    </head>

    <body>
    <style>
            body{
                font-family: Georgia;
            }
        </style>
        <header>
            <center><h2>Formulir Pendaftaran Siswa Baru</h2></center>
        </header>

        <form action="proses-pendaftaran.php" method="POST">

        <fieldset>

        <p>
            <label for="nama_lengkap">Nama Lengkap: </label>
            <input type="text" name="nama_lengkap" placeholder="nama_lengkap" />
        </p>
        <p>
            <label for="tempat_lahir">Tempat Lahir: </label>
            <input type="text" name="tempat_lahir" placeholder="tempat_lahir">
        </p>
        <p>
            <label for="tanggal_lahir">Tanggal Lahir: </label>
            <input type="date" name="tanggal_lahir" placeholder="tanggal_lahir">
        </p>
        <p>
            <label for="jenis_kelamin">Jenis Kelamin: </label>
            <label><input type="radio" name="jenis_kelamin" value="laki-laki">Laki-Laki</label>
            <label><input type="radio" name="jenis_kelamin" value="perempuan">Perempuam</label>
        </p>
        <p>
            <label for="agama">Agama: </label>
            <select name="agama">
                <option>Islam</option>
                <option>Kristen</option>
                <option>Hindu</option>
                <option>Budha</option>
                <option>Atheis</option>
            </select>
        </p>
        <p>
            <label for="alamat">Alamat: </label>
            <textarea name="alamat"></textarea>
        </p>
        <p>
            <label for="email">Email: </label>
            <input type="text" name="email" placeholder="email">
        </p>
        <p>
            <label for="no_hp">No Hp: </label>
            <input type="text" name="no_hp" placeholder="no_hp">
        </p>
        <p>
            <label for ="sekolah_asal">Sekolah Asal: </label>
            <input type="text" name="sekolah_asal" placeholder="nama sekolah" />
        </p>
        <p>
            <input type="submit" value="Daftar" name="daftar" />
        </p>
        </fieldset>
        </form>
    </body>
</html>