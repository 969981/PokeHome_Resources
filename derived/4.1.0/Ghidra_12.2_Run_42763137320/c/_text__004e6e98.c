/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6e98; name: thunk_FUN_.text__004e6884
 */


undefined8 thunk_FUN__text__004e6884(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *__src;
  byte *pbVar3;
  size_t __n;
  uint uVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x28);
  uVar4 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(byte **)(param_1 + 0x38) = pbVar3;
  if (pbVar3 == (byte *)0x0) goto LAB__text__004e6958;
  __src = pbVar3 + 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(byte **)(param_1 + 0x38) = __src;
  bVar2 = *pbVar3;
  uVar4 = bVar2 & 0x7f;
  *(uint *)(param_1 + 0x40) = uVar4;
  if ((char)bVar2 < '\0') {
    __src = pbVar3 + 2;
    *(uint *)(param_1 + 0x40) = uVar4 << 7;
    *(byte **)(param_1 + 0x38) = __src;
    bVar2 = pbVar3[1];
    uVar4 = bVar2 & 0x7f | uVar4 << 7;
    *(uint *)(param_1 + 0x40) = uVar4;
    if ((char)bVar2 < '\0') {
      __src = pbVar3 + 3;
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar2 = pbVar3[2];
      uVar4 = bVar2 & 0x7f | uVar4 << 7;
      *(uint *)(param_1 + 0x40) = uVar4;
      if (-1 < (char)bVar2) goto LAB__text__004e6924;
      __src = pbVar3 + 4;
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar2 = pbVar3[3];
      uVar4 = bVar2 & 0x7f | uVar4 << 7;
      uVar1 = uVar4;
      if ((char)bVar2 < '\0') {
        uVar1 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x40) = uVar1;
      if ((char)bVar2 < '\0') {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
        *(undefined8 *)(param_1 + 100) = 0;
        return 0;
      }
      pbVar3 = *(byte **)(param_1 + 0x30);
      if (pbVar3 <= __src) goto LAB__text__004e69b0;
    }
    else {
      pbVar3 = *(byte **)(param_1 + 0x30);
      if (pbVar3 <= __src) goto LAB__text__004e69b0;
    }
  }
  else {
LAB__text__004e6924:
    pbVar3 = *(byte **)(param_1 + 0x30);
    if (pbVar3 <= __src) {
LAB__text__004e69b0:
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 0x60) = uVar4;
      *(undefined8 *)(param_1 + 100) = 0;
      return 0;
    }
  }
  __n = (ulong)(uint)((int)pbVar3 - (int)__src) & 0xff;
  if (__src + 6 <= pbVar3) {
    __n = 6;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  memcpy((undefined4 *)(param_1 + 0x44),__src,__n);
LAB__text__004e6958:
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 100) = 0;
  return 1;
}


