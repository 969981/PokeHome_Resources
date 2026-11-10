/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028e2e0; name: FUN_.text__0028e2e0
 */


void FUN__text__0028e2e0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_28;
  
  uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0xb0) + 0xe8);
  if ((uVar2 != 0) && (pcVar1 = *(code **)(param_1 + 0xf0), pcVar1 != (code *)0x0)) {
    lVar3 = 0;
    lVar4 = 8;
    while( true ) {
      if (pcVar1 != (code *)0x0) {
        local_44 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + lVar3 * 4);
        local_48 = (undefined4)lVar3;
        local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xe0) + lVar4);
        (*pcVar1)(param_1 + 0x110,&local_28,&local_44,&local_48);
      }
      if (uVar2 - 1 == lVar3) break;
      pcVar1 = *(code **)(param_1 + 0xf0);
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + 1;
    }
  }
  return;
}


