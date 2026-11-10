/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049c600; name: FUN_.text__0049c600
 */


void FUN__text__0049c600(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 uStack_21;
  
  plVar9 = (long *)((long)param_1 + 0x68);
  *(undefined8 *)((long)param_1 + 0x240) = *(undefined8 *)((long)param_2 + 0x240);
  uVar7 = *(undefined8 *)((long)param_2 + 0x250);
  *(undefined8 *)((long)param_1 + 0x248) = *(undefined8 *)((long)param_2 + 0x248);
  *(undefined8 *)((long)param_1 + 0x250) = uVar7;
  if (*plVar9 != 0) {
    *(undefined4 *)((long)param_1 + 0x70) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)((long)param_1 + 0x68) = 0;
    *(undefined4 *)((long)param_1 + 0x74) = 0;
  }
  memcpy(param_1,param_2,200);
  *plVar9 = 0;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  if ((*(int *)((long)param_2 + 0x70) != 0) &&
     (FUN__text__004628a0(plVar9), *(int *)((long)param_2 + 0x70) != 0)) {
    puVar10 = *(undefined8 **)((long)param_2 + 0x68);
    do {
      local_4c = *puVar10;
      local_44 = *(undefined4 *)(puVar10 + 1);
      lVar4 = FUN__text__004626a0(plVar9,&local_4c,&uStack_21);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((long)puVar10 + 0xc);
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 !=
             (undefined8 *)
             (*(long *)((long)param_2 + 0x68) + (ulong)*(uint *)((long)param_2 + 0x70) * 0x10));
  }
  uVar7 = *(undefined8 *)((long)param_2 + 0xd8);
  uVar8 = *(undefined8 *)((long)param_2 + 0xe0);
  *(undefined4 *)((long)param_1 + 0xe8) = *(undefined4 *)((long)param_2 + 0xe8);
  *(undefined8 *)((long)param_1 + 0xd8) = uVar7;
  *(undefined8 *)((long)param_1 + 0xe0) = uVar8;
  uVar2 = *(uint *)((long)param_2 + 0xd0);
  if (uVar2 == 0) goto LAB__text__0049c7e0;
  uVar3 = *(uint *)((long)param_1 + 0xd0);
  if ((uVar3 <= uVar2) && (*(uint *)((long)param_1 + 0xd4) < uVar2)) {
    if (*(long *)((long)param_1 + 200) == 0) {
      lVar4 = FUN__text__00400f80(0,(ulong)uVar2 * 0x18);
      if (lVar4 == 0) goto LAB__text__0049c7e0;
      lVar6 = *(long *)((long)param_1 + 200);
      if ((lVar6 != 0) && (lVar6 != lVar4)) {
        if (uVar3 != 0) {
          lVar6 = 0;
          do {
            puVar10 = (undefined8 *)(lVar4 + lVar6);
            puVar1 = (undefined8 *)(*(long *)((long)param_1 + 200) + lVar6);
            lVar6 = lVar6 + 0x18;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            *puVar10 = *puVar1;
            puVar10[1] = uVar7;
            puVar10[2] = uVar8;
          } while ((ulong)uVar3 * 0x18 != lVar6);
          lVar6 = *(long *)((long)param_1 + 200);
        }
        FUN__text__00400fc0(0,lVar6);
      }
    }
    else {
      lVar4 = FUN__text__00400fa0();
      if (lVar4 == 0) goto LAB__text__0049c7e0;
    }
    *(long *)((long)param_1 + 200) = lVar4;
    *(uint *)((long)param_1 + 0xd4) = uVar2;
  }
  *(uint *)((long)param_1 + 0xd0) = uVar2;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  lVar4 = 0;
  do {
    puVar10 = (undefined8 *)(*(long *)((long)param_2 + 200) + lVar4);
    puVar1 = (undefined8 *)(*(long *)((long)param_1 + 200) + lVar4);
    lVar4 = lVar4 + 0x18;
    uVar7 = *puVar10;
    uVar8 = puVar10[2];
    puVar1[1] = puVar10[1];
    puVar1[2] = uVar8;
    *puVar1 = uVar7;
  } while ((ulong)uVar2 * 0x18 != lVar4);
LAB__text__0049c7e0:
  uVar2 = *(uint *)((long)param_2 + 0x238);
  if ((uVar2 != 0) && (uVar5 = FUN__text__0049c840((long)param_1 + 0xf0,uVar2), (uVar5 & 1) != 0)) {
    lVar4 = 0;
    do {
      FUN__text__0049c9c0(*(long *)((long)param_1 + 0x230) + lVar4,
                          *(long *)((long)param_2 + 0x230) + lVar4);
      lVar4 = lVar4 + 0x28;
    } while ((ulong)uVar2 * 0x28 != lVar4);
  }
  return;
}


