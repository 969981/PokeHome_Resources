/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d580; name: FUN_.text__0055d580
 */


void FUN__text__0055d580(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (*(short *)((long)param_1 + 0xc) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(*param_1 + lVar2);
        if (*(long *)(*param_1 + lVar2) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
        }
        if (puVar1[2] != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          puVar1[2] = 0;
          *(undefined4 *)(puVar1 + 3) = 0;
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar3 < *(ushort *)((long)param_1 + 0xc));
      lVar2 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar2);
    *param_1 = 0;
  }
  return;
}


