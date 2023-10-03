# Solving Recurrence Relations

## Examples

### 𝑎<sub>𝑛</sub> = 𝟸𝑎<sub>𝑛-𝟷</sub>

Since it's a description of a geometric sequence, 𝑎<sub>𝑛</sub> = 𝑎<sub>𝟶</sub>𝟸<sup>𝑛</sup>.

### 𝑎<sub>𝑛</sub> = 𝟸𝑎<sub>𝑛-𝟷</sub> + 𝟻
𝑎<sub>𝟷</sub> = 𝟸𝑎<sub>𝟶</sub> + 𝟻<br>
𝑎<sub>𝟸</sub> = 𝟸(𝟸𝑎<sub>𝟶</sub> + 𝟻) + 𝟻 = 𝟺𝑎<sub>𝟶</sub> + (𝟹)𝟻<br>
𝑎<sub>𝟹</sub> = 𝟸(𝟺𝑎<sub>𝟶</sub> + (𝟹)𝟻) + 𝟻 = 𝟾𝑎<sub>𝟶</sub> + (𝟽)𝟻<br>
𝑎<sub>𝟺</sub> = 𝟸(𝟾𝑎<sub>𝟶</sub> + (𝟽)𝟻) + 𝟻 = 𝟷𝟼𝑎<sub>𝟶</sub> + (𝟷𝟻)𝟻<br>

We can guess 𝑎<sub>𝑛</sub> = 𝟸<sup>𝑛</sup>𝑎<sub>𝟶</sub> + (𝟸<sup>𝑛</sup>-𝟷)𝟻 (1)

Assuming (1) is right, substituting it as 𝑎<sub>𝑛-𝟷</sub><br>
𝑎<sub>𝑛</sub> = 𝟸𝑎<sub>𝑛-𝟷</sub> + 𝟻<br>
= 𝟸(𝟸<sup>𝑛-𝟷</sup>𝑎<sub>𝟶</sub> + (𝟸<sup>𝑛-𝟷</sup>-𝟷)𝟻) + 𝟻<br>
= 𝟸<sup>𝑛</sup>𝑎<sub>𝟶</sub> + (𝟸<sup>𝑛</sup>-𝟷)𝟻<br>
= 𝑎<sub>𝑛</sub>

Therefore, 𝑎<sub>𝑛</sub> = 𝟸<sup>𝑛</sup>𝑎<sub>𝟶</sub> + (𝟸<sup>𝑛</sup>-𝟷)𝟻

### 𝑎<sub>𝑛</sub> = 𝟸𝑎<sub>𝑛-𝟷</sub> - 𝑎<sub>𝑛-𝟸</sub>

𝑎<sub>𝑛</sub> - 𝟸𝑎<sub>𝑛-𝟷</sub> + 𝑎<sub>𝑛-𝟸</sub> = 𝟶

𝑢𝑥<sub>𝟷</sub><sup>𝑛</sup> + 𝑣𝑥<sub>𝟸</sub><sup>𝑛</sup><br>
(𝑢 + 𝑣𝑛)𝑥<sup>𝑛</sup>