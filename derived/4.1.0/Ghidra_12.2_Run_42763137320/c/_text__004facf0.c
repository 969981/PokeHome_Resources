/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004facf0; name: FUN_.text__004facf0
 */


undefined8 FUN__text__004facf0(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  plVar10 = param_1 + 0x13;
  if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)*plVar10;
    puVar7 = (undefined8 *)0x0;
    do {
      puVar6 = puVar9;
      puVar2 = (undefined8 *)param_1[0x12];
      puVar9 = (undefined8 *)*puVar6;
      plVar1 = plVar10;
      if ((undefined8 *)param_1[0x13] != puVar6) {
        plVar1 = (long *)0x0;
      }
      *plVar1 = (long)puVar9;
      if (puVar2 == puVar6) {
        param_1[0x12] = 0;
        *puVar6 = 0;
      }
      else {
        *puVar6 = 0;
      }
      puVar2 = puVar6;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar7 = puVar6;
        puVar2 = puVar8;
      }
      puVar8 = puVar2;
      puVar7 = puVar6;
    } while (puVar9 != (undefined8 *)0x0);
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  if ((param_2 & 1) == 0) {
    uVar3 = FUN__text__004fb000(param_1);
    lVar5 = FUN__text__004fb0ac(param_1,uVar3);
  }
  else {
    lVar5 = FUN__text__004fb0ac(param_1,0);
  }
  if ((lVar5 != 0) &&
     (puVar9 = (undefined8 *)FUN__text__00400f80(0,0x50), puVar9 != (undefined8 *)0x0)) {
    FUN__text__004fa410(puVar9,lVar5);
    *puVar9 = 0;
    plVar1 = plVar10;
    if (param_1[0x13] != 0) {
      plVar1 = (long *)param_1[0x12];
    }
    *plVar1 = (long)puVar9;
    param_1[0x12] = (long)puVar9;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    param_1[0x14] = param_1[0x13];
    iVar4 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_50,auStack_24,auStack_28,0,0);
    if (iVar4 != 0) {
      while (puVar8 != (undefined8 *)0x0) {
        *(byte *)(puVar8 + 9) = *(byte *)(puVar8 + 9) & 0xfc;
        puVar9 = (undefined8 *)*puVar8;
        FUN__text__004ec13c(puVar8[1]);
        FUN__text__004fa444(puVar8);
        FUN__text__00400fc0(0,puVar8);
        puVar8 = puVar9;
      }
      return 1;
    }
  }
  while (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar8;
    *puVar8 = 0;
    plVar1 = plVar10;
    if (param_1[0x13] != 0) {
      plVar1 = (long *)param_1[0x12];
    }
    *plVar1 = (long)puVar8;
    param_1[0x12] = (long)puVar8;
    puVar8 = puVar9;
  }
  return 2;
}


