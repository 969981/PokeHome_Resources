/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d8e0; name: FUN_.text__0044d8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044d8e0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar1 = _DAT_008a45e0;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    do {
      lVar3 = FUN__text__00447b30(*puVar1,*puVar5);
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) == 0)) &&
         (plVar4 = (long *)FUN__text__00400f80(4,0xa0), plVar4 != (long *)0x0)) {
        FUN__text__0047d448();
        *(long **)(lVar3 + 0x20) = plVar4;
        plVar4[1] = lVar3;
        iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar3 + 0x58));
        if (iVar2 != 1) {
          (**(code **)*plVar4)(plVar4);
          FUN__text__00400fc0(4,plVar4);
          *(undefined8 *)(lVar3 + 0x20) = 0;
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}


