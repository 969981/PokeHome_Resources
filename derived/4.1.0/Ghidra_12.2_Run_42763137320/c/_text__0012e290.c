/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012e290; name: FUN_.text__0012e290
 */


void FUN__text__0012e290(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  plVar1 = (long *)param_3[6];
  if (plVar1 == (long *)0x0) {
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else if (plVar1 == param_3 + 2) {
    param_1[6] = param_1 + 2;
    (**(code **)(*(long *)param_3[6] + 0x18))();
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_1[6] = uVar2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  if (param_2 == 0) {
    return;
  }
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 * 0x110,0x10);
  lVar5 = param_1[8];
  lVar3 = lVar5 + param_1[9] * 0x110;
  FUN__text__0012e430(param_1,lVar5,lVar3,lVar3,uVar2,0,0);
  if (lVar5 != 0) {
    lVar3 = param_1[9];
    if (lVar3 != 0) {
      lVar5 = lVar5 + 0xb0;
      do {
        pcVar4 = *(code **)(lVar5 + -0x18);
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x10) = 0;
          *(undefined8 *)(lVar5 + -8) = 0;
          *(undefined8 *)(lVar5 + -0x20) = 0;
          *(undefined8 *)(lVar5 + -0x18) = 0;
          (*pcVar4)(lVar5);
        }
        pcVar4 = *(code **)(lVar5 + -0x98);
        if (pcVar4 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x90) = 0;
          *(undefined8 *)(lVar5 + -0x88) = 0;
          *(undefined8 *)(lVar5 + -0xa0) = 0;
          *(undefined8 *)(lVar5 + -0x98) = 0;
          (*pcVar4)(lVar5 + -0x80);
        }
        lVar3 = lVar3 + -1;
        lVar5 = lVar5 + 0x110;
      } while (lVar3 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x110,0x10);
  }
  param_1[8] = uVar2;
  param_1[10] = param_2;
  return;
}


