/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c24d0; name: FUN_.text__003c24d0
 */


void FUN__text__003c24d0(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *param_2;
  lVar1 = *(long *)(lVar5 + 0x78);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(lVar5 + 0x78) = lVar4;
  *(undefined4 *)(*param_2 + 0x70) = param_3;
  lVar4 = *(long *)(lVar3 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  do {
    if (lVar4 == lVar3) {
      lVar4 = *param_2;
      lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x60);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(lVar4 + 0x60);
      *(long *)(lVar4 + 0x60) = lVar1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar4 = *param_2;
      lVar1 = *(long *)(param_1 + 0x68);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(lVar4 + 0x68);
      *(long *)(lVar4 + 0x68) = lVar1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar1 = *param_2;
      lVar4 = *(long *)(*(long *)(param_1 + 0x68) + 0x60);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(lVar4 + 0x68);
      *(long *)(lVar4 + 0x68) = lVar1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar1 = *(long *)(param_1 + 0x68);
      lVar4 = *param_2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(lVar1 + 0x60);
      *(long *)(lVar1 + 0x60) = lVar4;
      lVar4 = lVar3;
      if (lVar5 != 0) {
LAB__text__003c2634:
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
LAB__text__003c2640:
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (lVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003c2680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      return;
    }
    lVar1 = *param_2;
    if (*(uint *)(lVar1 + 0x70) < *(uint *)(lVar4 + 0x70)) {
      lVar5 = *(long *)(lVar4 + 0x60);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(lVar1 + 0x60);
      *(long *)(lVar1 + 0x60) = lVar5;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar5 = *param_2;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar1 = *(long *)(lVar5 + 0x68);
      *(long *)(lVar5 + 0x68) = lVar4;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar1 = *(long *)(lVar4 + 0x60);
      lVar5 = *param_2;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(lVar1 + 0x68);
      *(long *)(lVar1 + 0x68) = lVar5;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(lVar4 + 0x60);
      *(long *)(lVar4 + 0x60) = lVar1;
      if (lVar5 == 0) goto LAB__text__003c2640;
      goto LAB__text__003c2634;
    }
    lVar1 = *(long *)(lVar4 + 0x68);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    lVar4 = lVar1;
  } while( true );
}


