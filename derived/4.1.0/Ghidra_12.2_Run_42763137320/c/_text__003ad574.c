/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad574; name: FUN_.text__003ad574
 */


void FUN__text__003ad574(long param_1)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  
  plVar7 = *(long **)(param_1 + 0x98);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  lVar1 = param_1 + 0x6d0;
  piVar2 = (int *)(**(code **)(*plVar7 + 0xf8))(plVar7,lVar1,0x712a4a);
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  plVar7 = *(long **)(param_1 + 0x98);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  piVar3 = (int *)(**(code **)(*plVar7 + 0xf8))(plVar7,lVar1,0x70d1ae);
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  plVar7 = *(long **)(param_1 + 0x98);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  piVar4 = (int *)(**(code **)(*plVar7 + 0xf8))(plVar7,lVar1,0x70ef6b);
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  plVar7 = *(long **)(param_1 + 0x98);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  piVar5 = (int *)(**(code **)(*plVar7 + 0xf8))(plVar7,lVar1,0x717f23);
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  if ((((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) && (piVar4 != (int *)0x0)) &&
     (piVar5 != (int *)0x0)) {
    plVar7 = *(long **)(param_1 + 0x98);
    *(float *)(param_1 + 0x6f4) = (float)*piVar2;
    *(float *)(param_1 + 0x6f8) = (float)*piVar3;
    *(float *)(param_1 + 0x6fc) = (float)*piVar4;
    *(float *)(param_1 + 0x700) = (float)*piVar5;
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))();
    }
    uVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,lVar1);
    (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
    iVar6 = (int)((float)uVar8 / *(float *)(param_1 + 0x6fc));
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x6ec) = iVar6;
    iVar6 = (int)((float)((ulong)uVar8 >> 0x20) / *(float *)(param_1 + 0x700));
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x6f0) = iVar6;
  }
  return;
}


