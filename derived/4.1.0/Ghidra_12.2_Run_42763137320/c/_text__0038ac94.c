/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038ac94; name: FUN_.text__0038ac94
 */


void FUN__text__0038ac94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uStack_21;
  
  lVar6 = FUN__text__0038ae68(&uStack_21,param_1);
  puVar5 = DAT_00ae8260;
  if (DAT_00ae8260 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*DAT_00ae8260;
    plVar3 = (long *)DAT_00ae8260[1];
    uVar2 = DAT_00ae8260[2];
    uVar4 = DAT_00ae8260[3];
    uVar7 = DAT_00ae8260[4];
    DAT_00ae8260 = (undefined8 *)lVar6;
    (*(code *)*puVar1)(puVar5);
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,uVar4,uVar7);
    lVar6 = (long)DAT_00ae8260;
  }
  DAT_00ae8260 = (undefined8 *)lVar6;
  lVar6 = 0;
  if (DAT_00ae8260 != (undefined8 *)0x0) {
    lVar6 = (long)DAT_00ae8260 + 0x48;
  }
  FUN__text__005e914c(lVar6);
  return;
}


