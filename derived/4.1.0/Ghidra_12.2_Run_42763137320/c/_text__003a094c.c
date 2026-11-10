/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a094c; name: FUN_.text__003a094c
 */


void FUN__text__003a094c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  pcVar1 = *(code **)(lVar3 + 0x418);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x420) = 0;
    *(undefined8 *)(lVar3 + 0x428) = 0;
    *(undefined8 *)(lVar3 + 0x410) = 0;
    *(undefined8 *)(lVar3 + 0x418) = 0;
    (*pcVar1)(lVar3 + 0x430);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,lVar3 + 0x430);
    uVar2 = param_2[3];
    *(undefined8 *)(lVar3 + 0x418) = param_2[1];
    *(undefined8 *)(lVar3 + 0x428) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(lVar3 + 0x420) = param_2[2];
    *(undefined8 *)(lVar3 + 0x410) = uVar2;
  }
  return;
}


