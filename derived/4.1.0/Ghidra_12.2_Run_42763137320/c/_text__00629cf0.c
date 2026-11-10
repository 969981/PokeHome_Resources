/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00629cf0; name: FUN_.text__00629cf0
 */


void FUN__text__00629cf0(void *param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  long local_2d8;
  undefined1 auStack_2ce [662];
  undefined8 local_38;
  
  memcpy(auStack_2ce,param_1,0x296);
  FUN__text__0063041c(auStack_2ce);
  FUN__text__0060e784(auStack_2e0,auStack_2ce);
  pcVar1 = (char *)(local_2d8 + 0xd8);
  uVar2 = FUN__text__0060e994(auStack_2e0,pcVar1);
  while ((uVar2 & 1) != 0) {
    if (*pcVar1 == '\x05') goto LAB__text__00629dcc;
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar2 = FUN__text__0060e994(auStack_2e0,pcVar1);
  }
  FUN__text__0060e8b0(auStack_2e0,auStack_2e8,&local_2f0,5,0x4a);
  uVar3 = FUN__text__0060e7f8(auStack_2e0);
  local_38 = local_2f0;
  (*(code *)*param_2)(param_2 + 4,&local_38,uVar3);
  FUN__text__006305fc(auStack_2ce);
  memcpy(param_1,auStack_2ce,0x296);
LAB__text__00629dcc:
  FUN__text__0060e79c(auStack_2e0);
  return;
}


