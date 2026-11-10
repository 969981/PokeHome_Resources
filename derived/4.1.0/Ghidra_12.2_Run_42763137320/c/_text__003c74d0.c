/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c74d0; name: FUN_.text__003c74d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c74d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = _DAT_0089f4d0;
  if (*(int *)(param_1 + 0x2f8) != -1) {
    FUN__text__00161470(*_DAT_0089f4d0);
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    lVar5 = *(long *)(param_1 + 0x188) << 4;
    plVar2 = (long *)(*(long *)(param_1 + 0x180) + 8);
    do {
      while (lVar4 = *plVar2, lVar4 == 0) {
        FUN__text__001614e0(*puVar3,0);
        plVar2 = plVar2 + 2;
        lVar5 = lVar5 + -0x10;
        if (lVar5 == 0) goto LAB__text__003c759c;
      }
      plVar1 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN__text__001614e0(*puVar3,lVar4);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar2 = plVar2 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
LAB__text__003c759c:
  lVar5 = 0x12f0;
  do {
    if (*(long *)(param_1 + lVar5) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + lVar5) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x2f0);
  if (*(long *)(param_1 + 0x2f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  if (*(long *)(param_1 + 0x2e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  if (*(long *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x2c8);
  if (lVar5 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x2c0) + 8);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      lVar5 = lVar5 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar5 != 0);
  }
  if (*(long *)(param_1 + 0x2d0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x280) + 0x18))
              (*(long **)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x2c0),
               *(long *)(param_1 + 0x2d0) * 0x18,8);
  }
  plVar1 = *(long **)(param_1 + 0x2b0);
  plVar2 = (long *)(param_1 + 0x290);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003c76ac:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003c76ac;
  }
  plVar1 = *(long **)(param_1 + 0x270);
  plVar2 = (long *)(param_1 + 0x250);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003c76e0:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003c76e0;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    (**(code **)(**(long **)(param_1 + 0x1e0) + 0x18))
              (*(long **)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x220),
               *(long *)(param_1 + 0x230) << 4,8);
  }
  plVar1 = *(long **)(param_1 + 0x210);
  plVar2 = (long *)(param_1 + 0x1f0);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003c7738:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003c7738;
  }
  plVar1 = *(long **)(param_1 + 0x1d0);
  plVar2 = (long *)(param_1 + 0x1b0);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003c776c:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003c776c;
  }
  lVar5 = *(long *)(param_1 + 0x188);
  if (lVar5 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x180) + 8);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      lVar5 = lVar5 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar5 != 0);
  }
  if (*(long *)(param_1 + 400) != 0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
              (*(long **)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x180),
               *(long *)(param_1 + 400) << 4,8);
  }
  plVar1 = *(long **)(param_1 + 0x170);
  plVar2 = (long *)(param_1 + 0x150);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003c7808:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003c7808;
  }
  plVar1 = *(long **)(param_1 + 0x130);
  plVar2 = (long *)(param_1 + 0x110);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003c783c:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003c783c;
  }
  lVar5 = *(long *)(param_1 + 0xe8);
  if (lVar5 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0xe0) + 8);
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      lVar5 = lVar5 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar5 != 0);
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
              (*(long **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xe0),
               *(long *)(param_1 + 0xf0) * 0x18,8);
  }
  plVar1 = *(long **)(param_1 + 0xd0);
  plVar2 = (long *)(param_1 + 0xb0);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__003c78e4;
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar3)(plVar2);
LAB__text__003c78e4:
  plVar1 = *(long **)(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x70);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x003c7930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003c7910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


