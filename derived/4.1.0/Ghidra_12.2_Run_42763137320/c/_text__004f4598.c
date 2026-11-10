/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4598; name: FUN_.text__004f4598
 */


void FUN__text__004f4598(long param_1,long param_2,int param_3,undefined4 param_4,
                        undefined4 *param_5,int *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  *param_6 = param_3;
  *param_5 = 0;
  cVar1 = *(char *)(param_2 + 0x14);
  uVar2 = (uint)(int)cVar1 >> 3 & 7;
  if (uVar2 == 3) {
    if (-1 < cVar1) {
      param_4 = *(undefined4 *)(param_2 + 0xc);
    }
    iVar3 = FUN__text__004f4650((int)param_1,*param_6,param_4,1);
    *param_6 = iVar3;
    return;
  }
  if (uVar2 == 2) {
    if (-1 < cVar1) {
      param_4 = *(undefined4 *)(param_2 + 0xc);
    }
    iVar3 = FUN__text__004f4650((int)param_1,*param_6,param_4,0);
    *param_6 = iVar3;
    return;
  }
  if ((uVar2 == 0) && (param_3 == 0)) {
    *param_5 = **(undefined4 **)(param_1 + 0x128);
    return;
  }
  return;
}


