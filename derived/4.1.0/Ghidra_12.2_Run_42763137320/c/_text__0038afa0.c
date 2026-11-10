/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038afa0; name: FUN_.text__0038afa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038afa0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  
  lVar2 = _DAT_008a3328 + 0x10;
  param_1[9] = _DAT_008a3328 + 0x40;
  pcVar4 = (code *)param_1[0x27];
  *param_1 = lVar2;
  if (pcVar4 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar4)(param_1 + 0x2a);
  }
  pcVar4 = (code *)param_1[0x17];
  if (pcVar4 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar4)(param_1 + 0x1a);
  }
  plVar1 = (long *)param_1[0xf];
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)plVar1[3];
    plVar1[3] = 0;
    lVar2 = *plVar1;
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        plVar5[1] = lVar3;
        (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],lVar3,plVar5[2] - lVar3,1);
      }
      (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],plVar5,plVar1[5],plVar1[6]);
    }
    (**(code **)(*(long *)param_1[0x10] + 0x18))((long *)param_1[0x10],plVar1,0x38,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0038b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar2,param_1[0xb] << 3,8);
  return;
}


