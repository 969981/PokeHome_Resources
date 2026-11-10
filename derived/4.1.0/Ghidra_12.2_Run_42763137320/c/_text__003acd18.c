/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003acd18; name: FUN_.text__003acd18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003acd18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar5 = _DAT_008a3578 + 0x150;
  lVar1 = _DAT_008a3578 + 400;
  lVar2 = _DAT_008a3578 + 0x1b8;
  lVar3 = _DAT_008a3578 + 0x1f0;
  *param_1 = _DAT_008a3578 + 0x10;
  param_1[9] = lVar5;
  param_1[10] = lVar1;
  param_1[0x14] = lVar2;
  param_1[0x15] = lVar3;
  if (param_1[0x11c] != 0) {
    (**(code **)(*(long *)(param_1[0x11c] + 0x48) + 0x18))();
    param_1[0x11c] = 0;
  }
  plVar7 = (long *)param_1[0x104];
  param_1[0x104] = 0;
  if (plVar7 != (long *)0x0) {
    if (*plVar7 != 0) {
      (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
      *plVar7 = 0;
    }
    (**(code **)(*(long *)param_1[0x105] + 0x18))
              ((long *)param_1[0x105],plVar7,param_1[0x106],param_1[0x107]);
  }
  lVar5 = param_1[0x100];
  param_1[0x100] = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_1[0x101] + 0x18))
              ((long *)param_1[0x101],lVar5,param_1[0x102],param_1[0x103]);
  }
  puVar8 = (undefined8 *)param_1[0xfc];
  param_1[0xfc] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*(long *)param_1[0xfd] + 0x18))
              ((long *)param_1[0xfd],puVar8,param_1[0xfe],param_1[0xff]);
  }
  if (param_1[0xfa] != 0) {
    (**(code **)(*(long *)(param_1[0xfa] + 0x48) + 0x18))();
    param_1[0xfa] = 0;
  }
  if (param_1[0xf9] != 0) {
    (**(code **)(*(long *)(param_1[0xf9] + 0x48) + 0x18))();
    param_1[0xf9] = 0;
  }
  plVar7 = (long *)param_1[0xf1];
  param_1[0xf1] = 0;
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      plVar7[1] = lVar5;
      (**(code **)(*(long *)plVar7[3] + 0x18))((long *)plVar7[3],lVar5,plVar7[2] - lVar5,8);
    }
    (**(code **)(*(long *)param_1[0xf2] + 0x18))
              ((long *)param_1[0xf2],plVar7,param_1[0xf3],param_1[0xf4]);
  }
  lVar5 = param_1[0xed];
  param_1[0xed] = 0;
  if (lVar5 == 0) goto LAB__text__003acf38;
  if (*(long *)(lVar5 + 0xb0) != 0) {
    (**(code **)(**(long **)(lVar5 + 0x60) + 0x18))
              (*(long **)(lVar5 + 0x60),*(undefined8 *)(lVar5 + 0xa0),*(long *)(lVar5 + 0xb0) * 0x30
               ,0x10);
  }
  plVar4 = *(long **)(lVar5 + 0x90);
  plVar7 = (long *)(lVar5 + 0x70);
  if (plVar4 == plVar7) {
    puVar8 = (undefined8 *)(*plVar7 + 0x20);
LAB__text__003acee0:
    (*(code *)*puVar8)(plVar7);
  }
  else if (plVar4 != (long *)0x0) {
    puVar8 = (undefined8 *)(*plVar4 + 0x28);
    plVar7 = plVar4;
    goto LAB__text__003acee0;
  }
  plVar4 = *(long **)(lVar5 + 0x50);
  plVar7 = (long *)(lVar5 + 0x30);
  if (plVar4 == plVar7) {
    puVar8 = (undefined8 *)(*plVar7 + 0x20);
LAB__text__003acf14:
    (*(code *)*puVar8)(plVar7);
  }
  else if (plVar4 != (long *)0x0) {
    puVar8 = (undefined8 *)(*plVar4 + 0x28);
    plVar7 = plVar4;
    goto LAB__text__003acf14;
  }
  (**(code **)(*(long *)param_1[0xee] + 0x18))
            ((long *)param_1[0xee],lVar5,param_1[0xef],param_1[0xf0]);
LAB__text__003acf38:
  puVar8 = (undefined8 *)param_1[0xe9];
  param_1[0xe9] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*(long *)param_1[0xea] + 0x18))
              ((long *)param_1[0xea],puVar8,param_1[0xeb],param_1[0xec]);
  }
  pcVar6 = (code *)param_1[0xc9];
  if (pcVar6 != (code *)0x0) {
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    param_1[0xc9] = 0;
    param_1[200] = 0;
    (*pcVar6)(param_1 + 0xcc);
  }
  pcVar6 = (code *)param_1[0xb9];
  if (pcVar6 != (code *)0x0) {
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    param_1[0xb9] = 0;
    param_1[0xb8] = 0;
    (*pcVar6)(param_1 + 0xbc);
  }
  pcVar6 = (code *)param_1[0xa9];
  if (pcVar6 != (code *)0x0) {
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
    param_1[0xa9] = 0;
    param_1[0xa8] = 0;
    (*pcVar6)(param_1 + 0xac);
  }
  pcVar6 = (code *)param_1[0x99];
  if (pcVar6 != (code *)0x0) {
    param_1[0x9b] = 0;
    param_1[0x9a] = 0;
    param_1[0x99] = 0;
    param_1[0x98] = 0;
    (*pcVar6)(param_1 + 0x9c);
  }
  pcVar6 = (code *)param_1[0x89];
  if (pcVar6 != (code *)0x0) {
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    param_1[0x89] = 0;
    param_1[0x88] = 0;
    (*pcVar6)(param_1 + 0x8c);
  }
  pcVar6 = (code *)param_1[0x79];
  if (pcVar6 != (code *)0x0) {
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    (*pcVar6)(param_1 + 0x7c);
  }
  pcVar6 = (code *)param_1[0x69];
  if (pcVar6 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar6)(param_1 + 0x6c);
  }
  pcVar6 = (code *)param_1[0x59];
  if (pcVar6 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar6)(param_1 + 0x5c);
  }
  pcVar6 = (code *)param_1[0x49];
  if (pcVar6 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar6)(param_1 + 0x4c);
  }
  pcVar6 = (code *)param_1[0x39];
  if (pcVar6 != (code *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (*pcVar6)(param_1 + 0x3c);
  }
  pcVar6 = (code *)param_1[0x29];
  if (pcVar6 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar6)(param_1 + 0x2c);
  }
  pcVar6 = (code *)param_1[0x19];
  if (pcVar6 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar6)(param_1 + 0x1c);
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  *param_1 = 0x881758;
  param_1[9] = 0x881848;
  param_1[10] = 0x881888;
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


