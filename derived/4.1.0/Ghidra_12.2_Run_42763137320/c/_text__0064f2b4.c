/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064f2b4; name: FUN_.text__0064f2b4
 */


void FUN__text__0064f2b4(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  if ((*(long *)(param_1 + 0x530) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0x530) + 0x68), uVar1 != 0)) {
    local_30 = 4;
    local_38 = 0x6500004e21;
    local_28 = (ulong)uVar1;
    iVar2 = nnsocketResolverSetOption(&local_38);
    while ((iVar2 == -1 && (iVar2 = nnsocketGetLastErrno(), iVar2 == 0xb))) {
      nnosSleepThread(&DAT_00989680);
      iVar2 = nnsocketResolverSetOption(&local_38);
    }
  }
  FUN__text__0064f344(param_1 + 0x510);
  return;
}


