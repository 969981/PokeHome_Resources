/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004730bc; name: FUN_.text__004730bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004730bc(uint param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar2 = _DAT_008a48e8;
  puVar3 = (undefined8 *)_DAT_008a48e8[2];
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN__text__00400f80(5,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar3 = puVar2[2];
    puVar2[2] = puVar3;
    puVar4 = (undefined8 *)puVar2[1];
  }
  else {
    puVar4 = (undefined8 *)_DAT_008a48e8[1];
  }
  if (puVar4 == (undefined8 *)0x0) {
    *puVar2 = puVar3;
  }
  else {
    *puVar4 = puVar3;
    puVar3 = (undefined8 *)puVar2[2];
  }
  puVar2[1] = puVar3;
  puVar2[2] = *puVar3;
  *puVar3 = 0;
  *(int *)((long)puVar2 + 0x24) = *(int *)((long)puVar2 + 0x24) + 1;
  puVar1 = _DAT_008a48e0;
  lVar5 = puVar2[1];
  *(undefined8 *)(lVar5 + 8) = param_2;
  *(undefined4 *)(lVar5 + 0x10) = *puVar1;
  *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) & 0xfe00 | (ushort)param_1 & 0xff;
  if (param_1 < 2) {
    DAT_00aea838 = 1;
  }
  return 1;
}


