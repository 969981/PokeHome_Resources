/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4a50; name: FUN_.text__003f4a50
 */


undefined8 FUN__text__003f4a50(char *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = nn::fs::OpenFile((FileHandle *)(param_4 + 4),param_1,1);
    if (iVar3 == 0) {
      nn::fs::GetFileSize(param_4,param_4[4]);
LAB__text__003f4b44:
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[3] = (ulong)param_2;
      return 1;
    }
  }
  else if (param_2 < 3) {
    uVar1 = nn::fs::CreateFile(param_1,0);
    uVar2 = uVar1 & 0x3fffff;
    if (uVar2 == 0x202) {
      return 0x24;
    }
    if ((((uVar2 == 0x402) || (uVar2 == 0xe02)) || ((uVar1 & 0x1ff) != 2)) ||
       (0xf < (uVar1 >> 9 & 0x1ffe) - 0x1e)) {
      uVar2 = nn::fs::OpenFile((FileHandle *)(param_4 + 4),param_1,6);
      if ((uVar2 & 0x3fffff) == 0x202) {
        return 0x42;
      }
      if (uVar2 == 0) {
        *param_4 = 0;
        goto LAB__text__003f4b44;
      }
    }
  }
  return 2;
}


