/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00237014; name: FUN_.text__00237014
 */


void FUN__text__00237014(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x760) != '\0') {
    *(undefined1 *)(param_1 + 0x760) = 0;
    local_38 = 0xa393a9f060c3e94b;
    uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38);
    FUN__text__003a14e8(uVar1,0);
    local_38 = 0xa393a9f060c3e94b;
    uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38);
    FUN__text__003a14e8(uVar1,1);
    *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = 0;
    FUN__text__00128ca0(param_1,1,1);
  }
  FUN__text__00128ec0(param_1,0);
  pcVar2 = *(code **)(param_1 + 0x2e48);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2e50) = 0;
    *(undefined8 *)(param_1 + 0x2e58) = 0;
    *(undefined8 *)(param_1 + 0x2e40) = 0;
    *(undefined8 *)(param_1 + 0x2e48) = 0;
    (*pcVar2)(param_1 + 0x2e60);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x2e60);
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0x2e48) = param_2[1];
    *(undefined8 *)(param_1 + 0x2e58) = uVar1;
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x2e50) = param_2[2];
    *(undefined8 *)(param_1 + 0x2e40) = uVar1;
  }
  local_38 = 0xa393a9f060c3e94b;
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38);
  FUN__text__003a14e8(uVar1,0);
  local_38 = 0xa393a9f060c3e94b;
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38);
  FUN__text__003a14e8(uVar1,1);
  return;
}


