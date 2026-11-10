/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00234bd4; name: FUN_.text__00234bd4
 */


undefined8 FUN__text__00234bd4(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_1;
  FUN__text__00128ca0(lVar3,1,1);
  iVar2 = FUN__text__0022cc88(*(undefined8 *)(lVar3 + 0x650));
  iVar1 = *(int *)(*(long *)(lVar3 + 0x640) + 0xc);
  if (0 < iVar1 != (*(char *)(*(long *)(lVar3 + 0x7f8) + 0x15a) != '\0')) {
    *(bool *)(*(long *)(lVar3 + 0x7f8) + 0x15a) = 0 < iVar1;
    FUN__text__003a14e8();
  }
  if (iVar1 + 1 < iVar2 != (*(char *)(*(long *)(lVar3 + 0x800) + 0x15a) != '\0')) {
    *(bool *)(*(long *)(lVar3 + 0x800) + 0x15a) = iVar1 + 1 < iVar2;
    FUN__text__003a14e8();
  }
  FUN__text__0012c300(lVar3 + 0x110,0x71cdcf);
  return 1;
}


