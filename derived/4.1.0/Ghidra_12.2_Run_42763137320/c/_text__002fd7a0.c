/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd7a0; name: FUN_.text__002fd7a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002fd7a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar2 = _DAT_008a2918;
  pcVar3 = (code *)_DAT_008a2918[1];
  if (pcVar3 != (code *)0x0) {
    puVar1 = _DAT_008a2918 + 4;
    _DAT_008a2918[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    (*pcVar3)(puVar1);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,puVar2 + 4);
    uVar4 = param_1[3];
    puVar2[1] = param_1[1];
    puVar2[3] = uVar4;
    uVar4 = *param_1;
    puVar2[2] = param_1[2];
    *puVar2 = uVar4;
  }
  return;
}


