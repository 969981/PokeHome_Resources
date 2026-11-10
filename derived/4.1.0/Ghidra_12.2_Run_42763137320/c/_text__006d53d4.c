/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d53d4; name: FUN_.text__006d53d4
 */


void FUN__text__006d53d4(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  
  FUN__text__006ebd38();
  FUN__text__006ebd10(param_2);
  *(byte **)(param_1 + 0x18) = param_2;
  *param_1 = 1;
  if (param_3[3] != 0) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 8;
    *param_2 = *param_2 & 0xfe;
    if ((byte)(param_3[3] - 1) < 0x10) {
      param_1[1] = *(undefined1 *)((long)(char)(param_3[3] - 1) + 0x724770);
      FUN__text__006f45d8(param_1);
      return;
    }
    param_1[1] = 0;
    FUN__text__006f45d8(param_1);
    return;
  }
  if (*param_3 == 0) {
    *param_2 = *param_2 & 0xfe;
    FUN__text__006f45d8(param_1);
    return;
  }
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfff7;
  *param_2 = *param_2 | 1;
  if (param_3[1] - 1 < 9) {
    param_2[1] = *(byte *)((long)(char)(param_3[1] - 1) + 0x76688c);
    bVar1 = param_3[2];
  }
  else {
    param_2[1] = 0;
    bVar1 = param_3[2];
  }
  if (bVar1 - 1 < 9) {
    param_2[2] = *(byte *)((long)(char)(bVar1 - 1) + 0x76688c);
    bVar1 = param_4[1];
  }
  else {
    param_2[2] = 0;
    bVar1 = param_4[1];
  }
  if (bVar1 - 1 < 9) {
    param_2[4] = *(byte *)((long)(char)(bVar1 - 1) + 0x76688c);
    bVar1 = param_4[2];
  }
  else {
    param_2[4] = 0;
    bVar1 = param_4[2];
  }
  if (bVar1 - 1 < 9) {
    bVar1 = *(byte *)((long)(char)(bVar1 - 1) + 0x76688c);
  }
  else {
    bVar1 = 0;
  }
  param_2[5] = bVar1;
  bVar1 = (byte)(0x40302010000 >> (((ulong)*param_3 & 7) << 3));
  if (5 < (ulong)*param_3) {
    bVar1 = 0;
  }
  param_2[3] = bVar1;
  bVar1 = (byte)(0x40302010000 >> (((ulong)*param_4 & 7) << 3));
  if (5 < (ulong)*param_4) {
    bVar1 = 0;
  }
  param_2[6] = bVar1;
  FUN__text__006f45d8(param_1);
  return;
}


