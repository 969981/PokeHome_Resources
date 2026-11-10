/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00662b8c; name: FUN_.text__00662b8c
 */


void FUN__text__00662b8c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar2 = *(long *)(param_1 + 0x1e8);
  if (((*(int *)(param_1 + 0xef0) != *(int *)(param_1 + 0x1540)) ||
      (((uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x34) & 1) !=
       (*(ushort *)(param_1 + 0x15a4) >> 0xc & 1))) ||
     (*(long *)(param_1 + 0xee8) != *(long *)(param_1 + 0x1538))) {
    local_28 = 0;
    local_30 = 0;
    FUN__text__00663e0c(param_1,&local_30);
    iVar1 = FUN__text__006865fc(param_2,0,*(undefined4 *)(lVar2 + 0x218),&local_30);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN__text__0067c120(param_2);
  return;
}


