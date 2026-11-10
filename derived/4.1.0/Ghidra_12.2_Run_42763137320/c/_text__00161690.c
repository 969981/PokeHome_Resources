/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00161690; name: FUN_.text__00161690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00161690(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar6 = _DAT_0089f718;
  *(long *)(param_1 + 0xb10) = _DAT_0089f718 + 0x10;
  if (*(long *)(param_1 + 0xb18) == 0) {
    *(undefined8 *)(param_1 + 0xb18) = 0;
    pcVar7 = *(code **)(param_1 + 0xba8);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0xb18),param_1 + 0xb10);
    lVar2 = *(long *)(param_1 + 0xb18);
    *(undefined8 *)(param_1 + 0xb18) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar7 = *(code **)(param_1 + 0xba8);
  }
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 3000) = 0;
    *(undefined8 *)(param_1 + 0xbb0) = 0;
    *(undefined8 *)(param_1 + 0xba8) = 0;
    *(undefined8 *)(param_1 + 0xba0) = 0;
    (*pcVar7)(param_1 + 0xbc0);
  }
  pcVar7 = *(code **)(param_1 + 0xb28);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb38) = 0;
    *(undefined8 *)(param_1 + 0xb30) = 0;
    *(undefined8 *)(param_1 + 0xb28) = 0;
    *(undefined8 *)(param_1 + 0xb20) = 0;
    (*pcVar7)(param_1 + 0xb40);
  }
  if (*(long *)(param_1 + 0xb18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb18) = 0;
  }
  puVar9 = *(undefined8 **)(param_1 + 0xaf0);
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    if (puVar9[10] != 0) {
      (**(code **)(*(long *)*puVar9 + 0x18))((long *)*puVar9,puVar9[8],puVar9[10] << 4,8);
    }
    plVar3 = (long *)puVar9[6];
    plVar4 = puVar9 + 2;
    if (plVar3 == plVar4) {
      puVar8 = (undefined8 *)(*plVar4 + 0x20);
LAB__text__001617a4:
      (*(code *)*puVar8)(plVar4);
    }
    else if (plVar3 != (long *)0x0) {
      puVar8 = (undefined8 *)(*plVar3 + 0x28);
      plVar4 = plVar3;
      goto LAB__text__001617a4;
    }
    (**(code **)(**(long **)(param_1 + 0xaf8) + 0x18))
              (*(long **)(param_1 + 0xaf8),puVar9,*(undefined8 *)(param_1 + 0xb00),
               *(undefined8 *)(param_1 + 0xb08));
  }
  lVar2 = *(long *)(param_1 + 0xad0);
  *(undefined8 *)(param_1 + 0xad0) = 0;
  if (lVar2 == 0) goto LAB__text__00161824;
  plVar3 = *(long **)(lVar2 + 0x30);
  plVar4 = (long *)(lVar2 + 0x10);
  if (plVar3 == plVar4) {
    puVar9 = (undefined8 *)(*plVar4 + 0x20);
LAB__text__00161800:
    (*(code *)*puVar9)(plVar4);
  }
  else if (plVar3 != (long *)0x0) {
    puVar9 = (undefined8 *)(*plVar3 + 0x28);
    plVar4 = plVar3;
    goto LAB__text__00161800;
  }
  (**(code **)(**(long **)(param_1 + 0xad8) + 0x18))
            (*(long **)(param_1 + 0xad8),lVar2,*(undefined8 *)(param_1 + 0xae0),
             *(undefined8 *)(param_1 + 0xae8));
LAB__text__00161824:
  if (*(long *)(param_1 + 0xac0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xac0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xac0) = 0;
  }
  lVar2 = 0x850;
  do {
    lVar1 = param_1 + lVar2;
    *(long *)(lVar1 + 0x150) = lVar6 + 0x10;
    if (*(long *)(lVar1 + 0x158) == 0) {
      *(undefined8 *)(lVar1 + 0x158) = 0;
      pcVar7 = *(code **)(lVar1 + 0x1e8);
    }
    else {
      FUN__text__005d9290(*(long *)(lVar1 + 0x158),lVar1 + 0x150);
      lVar5 = *(long *)(lVar1 + 0x158);
      *(undefined8 *)(lVar1 + 0x158) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      pcVar7 = *(code **)(lVar1 + 0x1e8);
    }
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x1f0) = 0;
      *(undefined8 *)(lVar1 + 0x1f8) = 0;
      *(undefined8 *)(lVar1 + 0x1e0) = 0;
      *(undefined8 *)(lVar1 + 0x1e8) = 0;
      (*pcVar7)(lVar1 + 0x200);
    }
    pcVar7 = *(code **)(lVar1 + 0x168);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x170) = 0;
      *(undefined8 *)(lVar1 + 0x178) = 0;
      *(undefined8 *)(lVar1 + 0x160) = 0;
      *(undefined8 *)(lVar1 + 0x168) = 0;
      (*pcVar7)(lVar1 + 0x180);
    }
    if (*(long *)(lVar1 + 0x158) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x158) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x158) = 0;
    }
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != 0);
  if (*(long *)(param_1 + 0x268) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x260) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if (*(long *)(param_1 + 600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 600) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 600) = 0;
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x250) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x240) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x230) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x220) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x218) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x208) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if (*(long *)(param_1 + 0x1c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  if (*(long *)(param_1 + 0x1c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  *(long *)(param_1 + 0xa0) = lVar6 + 0x10;
  if (*(long *)(param_1 + 0xa8) == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    pcVar7 = *(code **)(param_1 + 0x138);
  }
  else {
    FUN__text__005d9290();
    lVar6 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar7 = *(code **)(param_1 + 0x138);
  }
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    (*pcVar7)(param_1 + 0x150);
  }
  pcVar7 = *(code **)(param_1 + 0xb8);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (*pcVar7)(param_1 + 0xd0);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN__text__00162000(param_1 + 0x50);
  return;
}


