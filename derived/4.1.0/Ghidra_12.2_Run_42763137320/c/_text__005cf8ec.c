/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf8ec; name: FUN_.text__005cf8ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf8ec(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  piVar1 = _DAT_008a0300;
  if ((*(long *)(param_1 + 8) != 0) &&
     (lVar2 = FUN__text__005cfdec(*(long *)(param_1 + 8),*(undefined4 *)(param_1 + 0x118)),
     -1 < *(long *)(lVar2 + 0x10))) {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x58) + (long)*piVar1 * 0x168 + 0xb0);
    puVar3 = (undefined8 *)FUN__text__005b50f0();
    (*(code *)*_DAT_008a5960)
              (uVar4,*puVar3,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x68);
  }
  FUN__text__006ed020(*(long *)(param_2 + 0x58) + (long)*piVar1 * 0x168,uVar4,
                      *(undefined4 *)(param_1 + 0x11c));
  return;
}


