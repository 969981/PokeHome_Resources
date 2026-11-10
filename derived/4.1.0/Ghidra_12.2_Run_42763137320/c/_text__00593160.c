/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00593160; name: FUN_.text__00593160
 */


undefined8
FUN__text__00593160(double param_1,double param_2,undefined1 param_3 [16],double param_4,
                   double param_5,long param_6,long param_7,long *param_8,long *param_9)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  double dVar6;
  
  lVar3 = 0;
  plVar4 = param_8;
  do {
    pvVar1 = (void *)plVar4[1];
    dVar6 = (double)NEON_ucvtf(*(undefined8 *)(lVar3 + 0x757be0));
    lVar5 = (long)(param_2 * dVar6 + 0.5);
    if (pvVar1 == (void *)0x0) {
LAB__text__005931e8:
      *plVar4 = lVar5;
      pvVar1 = (void *)(**(code **)(*param_9 + 0x10))(param_9,lVar5 << 2,0x72051d,0x12f);
      plVar4[1] = (long)pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0x34;
      }
    }
    else {
      if (*plVar4 != lVar5) {
        (**(code **)(*param_9 + 0x18))(param_9);
        plVar4[1] = 0;
        goto LAB__text__005931e8;
      }
      *plVar4 = lVar5;
    }
    lVar3 = lVar3 + 8;
    memset(pvVar1,0,(ulong)(uint)((int)*plVar4 << 2));
    *(int *)(plVar4 + 3) = 0;
    plVar4[2] = plVar4[1];
    plVar4 = plVar4 + 4;
  } while (lVar3 != 0x40);
  pvVar1 = (void *)param_8[0x21];
  if (pvVar1 == (void *)0x0) {
LAB__text__005932a0:
    param_8[0x20] = 0xe1;
    pvVar1 = (void *)(**(code **)(*param_9 + 0x10))(param_9,900,0x72051d,0x14b);
    param_8[0x21] = (long)pvVar1;
    if (pvVar1 != (void *)0x0) goto LAB__text__005932d4;
LAB__text__005934e8:
    uVar2 = 0x34;
  }
  else {
    if (param_8[0x20] != 0xe1) {
      (**(code **)(*param_9 + 0x18))(param_9);
      param_8[0x21] = 0;
      goto LAB__text__005932a0;
    }
    param_8[0x20] = 0xe1;
LAB__text__005932d4:
    memset(pvVar1,0,(ulong)(uint)((int)param_8[0x20] << 2));
    *(int *)(param_8 + 0x23) = 0;
    param_8[0x22] = param_8[0x21];
    pvVar1 = (void *)param_8[0x25];
    if (pvVar1 == (void *)0x0) {
LAB__text__00593324:
      param_8[0x24] = 0x155;
      pvVar1 = (void *)(**(code **)(*param_9 + 0x10))(param_9,0x554,0x72051d,0x14b);
      param_8[0x25] = (long)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB__text__005934e8;
    }
    else {
      if (param_8[0x24] != 0x155) {
        (**(code **)(*param_9 + 0x18))(param_9);
        param_8[0x25] = 0;
        goto LAB__text__00593324;
      }
      param_8[0x24] = 0x155;
    }
    memset(pvVar1,0,(ulong)(uint)((int)param_8[0x24] << 2));
    *(int *)(param_8 + 0x27) = 0;
    param_8[0x26] = param_8[0x25];
    pvVar1 = (void *)param_8[0x29];
    if (pvVar1 == (void *)0x0) {
LAB__text__005933a8:
      param_8[0x28] = 0x1b9;
      pvVar1 = (void *)(**(code **)(*param_9 + 0x10))(param_9,0x6e4,0x72051d,0x14b);
      param_8[0x29] = (long)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB__text__005934e8;
    }
    else {
      if (param_8[0x28] != 0x1b9) {
        (**(code **)(*param_9 + 0x18))(param_9);
        param_8[0x29] = 0;
        goto LAB__text__005933a8;
      }
      param_8[0x28] = 0x1b9;
    }
    memset(pvVar1,0,(ulong)(uint)((int)param_8[0x28] << 2));
    *(int *)(param_8 + 0x2b) = 0;
    param_8[0x2a] = param_8[0x29];
    pvVar1 = (void *)param_8[0x2d];
    if (pvVar1 == (void *)0x0) {
LAB__text__0059342c:
      param_8[0x2c] = 0x22c;
      pvVar1 = (void *)(**(code **)(*param_9 + 0x10))(param_9,0x8b0,0x72051d,0x14b);
      param_8[0x2d] = (long)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB__text__005934e8;
    }
    else {
      if (param_8[0x2c] != 0x22c) {
        (**(code **)(*param_9 + 0x18))(param_9);
        param_8[0x2d] = 0;
        goto LAB__text__0059342c;
      }
      param_8[0x2c] = 0x22c;
    }
    memset(pvVar1,0,(ulong)(uint)((int)param_8[0x2c] << 2));
    plVar4 = param_8 + 0x30;
    *(int *)(param_8 + 0x2f) = 0;
    param_8[0x2e] = param_8[0x2d];
    *(int *)(param_8 + 0x30) = 6;
    FUN__text__005928c0(plVar4);
    param_8[0x36] = (long)(param_4 / param_1);
    FUN__text__005928c0(plVar4);
    param_8[0x38] = param_7;
    FUN__text__005928c0(plVar4);
    plVar4 = param_8 + 0x3b;
    *(int *)(param_8 + 0x3b) = 5;
    FUN__text__005928c0(plVar4);
    param_8[0x41] = (long)(param_5 / param_1);
    FUN__text__005928c0(plVar4);
    param_8[0x43] = param_6;
    FUN__text__005928c0(plVar4);
    uVar2 = 1;
  }
  return uVar2;
}


