/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00113348; name: FUN_.text__00113348
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00113348(undefined8 *param_1)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = _DAT_0089fc90;
  lVar4 = *(long *)(param_1[1] + 0x238);
  lVar3 = *(long *)(lVar4 + 0x10);
  uVar1 = *(ushort *)(*(long *)(*(long *)(*(long *)(param_1[1] + 0x78) + 0x238) + 0x10) + 0x54);
  FUN__text__005ec480(*(undefined8 *)(*_DAT_0089fc90 + 0x238),*param_1,uVar1 & 1,uVar1 >> 1 & 1,
                      *(undefined1 *)(lVar3 + 0x89b),*(undefined1 *)(lVar3 + 0x89a),
                      *(undefined1 *)(lVar3 + 0x899));
  lVar3 = *(long *)(lVar4 + 0x10);
  if ((*(char *)(lVar3 + 0x898) == '\0') || (*(char *)(lVar3 + 0x89e) != '\x05')) {
    return;
  }
  FUN__text__005ec4c0(*(undefined8 *)(*plVar2 + 0x238),*param_1);
  return;
}


