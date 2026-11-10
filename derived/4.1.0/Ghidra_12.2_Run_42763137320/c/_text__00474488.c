/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474488; name: FUN_.text__00474488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00474488(undefined8 *param_1,int *param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  
  puVar1 = (uint *)((long)param_1 + 0x313);
  uVar3 = *puVar1;
  if ((uVar3 >> 0xe & 1) == 0) {
    if (param_1[0x52] != 0) {
      uVar2 = FUN__text__0042fbf4();
      if ((uVar2 & 1) != 0) goto LAB__text__004744c0;
      uVar3 = *puVar1;
    }
    *puVar1 = uVar3 | 0x2000;
    if (*param_2 != 0) {
      FUN__text__004748c0(param_1,1,0x2000000,*(undefined8 *)param_2);
      return;
    }
    if ((*(byte *)((long)param_1 + 0x312) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0047457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,0,1);
      return;
    }
    if (param_1[0x51] != 0) {
      FUN__text__0042f65c(0,*_DAT_008a4648,param_1[0x51],0x2000000,0,4,0);
      return;
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    if ((uVar3 >> 0x10 & 1) == 0) {
      *puVar1 = uVar3 & 0xfff0ffff | 0x12000;
    }
  }
LAB__text__004744c0:
                    /* WARNING: Could not recover jumptable at 0x004744e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,0,0);
  return;
}


