/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432620; name: FUN_.text__00432620
 */


undefined8 * FUN__text__00432620(undefined8 *param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uStack_11;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    plVar5 = (long *)*param_1;
    lVar6 = (ulong)uVar4 << 3;
    lVar7 = lVar6;
    plVar1 = plVar5;
    do {
      if (*(int *)(*plVar1 + 4) == param_2) {
        if (lVar7 != 0) {
          uVar8 = (ulong)(uVar4 - 1) << 3;
          plVar1 = plVar5;
          goto LAB__text__00432680;
        }
        break;
      }
      plVar1 = plVar1 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN__text__00400f80(2,0x40);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 1;
  *puVar2 = 0;
  *(undefined8 *)((long)puVar2 + 5) = 0;
  *(undefined1 *)((long)puVar2 + 0xd) = 8;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)((long)puVar2 + 0x14) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  goto LAB__text__004326e0;
  while( true ) {
    plVar1 = plVar1 + 1;
    uVar8 = uVar8 - 8;
    lVar6 = lVar6 + -8;
    if (lVar6 == 0) break;
LAB__text__00432680:
    puVar2 = (undefined8 *)*plVar1;
    if (*(int *)((long)puVar2 + 4) == param_2) {
      if (lVar6 != 0) {
        uVar4 = uVar4 - 1;
        if (plVar1 < plVar5 + uVar4) {
          memmove(plVar1,plVar1 + 1,uVar8 & 0xfffffff8);
          uVar4 = *(int *)(param_1 + 1) - 1;
        }
        *(uint *)(param_1 + 1) = uVar4;
      }
      break;
    }
  }
LAB__text__004326e0:
  puVar3 = (undefined8 *)FUN__text__00432f60(param_1,param_3,&uStack_11);
  if (puVar3 == (undefined8 *)0x0) {
    if (puVar2 != (undefined8 *)0x0) {
      if (puVar2[3] != 0) {
        FUN__text__00400fc0(0);
      }
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined4 *)(puVar2 + 5) = 1;
      FUN__text__00400fc0(2,puVar2);
      return (undefined8 *)0x0;
    }
  }
  else {
    *puVar3 = puVar2;
  }
  return puVar2;
}


