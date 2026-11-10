/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f483c; name: FUN_.text__006f483c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f483c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 4);
  (*DAT_00c60908)();
  (*DAT_00c60910)(param_1,param_3[4] & 1);
  (*DAT_00c60918)(param_1,(byte)param_3[4] >> 1 & 1);
  (*DAT_00c60928)(param_1,(byte)param_3[4] >> 2 & 1);
  uVar4 = FUN__text__006f22d0(*param_3);
  (*(code *)*_DAT_008a7888)(param_1,uVar4);
  uVar4 = FUN__text__006f22f0(param_3[0x1b]);
  puVar2 = _DAT_008a7898;
  (*(code *)*_DAT_008a7898)(param_1,2,uVar4);
  uVar4 = FUN__text__006f22e0(param_3[0x18]);
  uVar5 = FUN__text__006f22e0(param_3[0x19]);
  uVar6 = FUN__text__006f22e0(param_3[0x1a]);
  puVar3 = _DAT_008a78a0;
  (*(code *)*_DAT_008a78a0)(param_1,2,uVar4,uVar5,uVar6);
  uVar4 = FUN__text__006f22f0(param_3[0xb]);
  (*(code *)*puVar2)(param_1,1,uVar4);
  uVar4 = FUN__text__006f22e0(param_3[8]);
  uVar5 = FUN__text__006f22e0(param_3[9]);
  uVar6 = FUN__text__006f22e0(param_3[10]);
  (*(code *)*puVar3)(param_1,1,uVar4,uVar5,uVar6);
  *(uint *)(param_1 + 0x10) = (uint)(byte)param_3[0x1c];
  *(uint *)(param_1 + 0x14) = (uint)(byte)param_3[0xc];
  *(uint *)(param_1 + 8) = (uint)(byte)param_3[1];
  bVar1 = param_3[2];
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(uint *)(param_1 + 0xc) = (uint)bVar1;
  return;
}


