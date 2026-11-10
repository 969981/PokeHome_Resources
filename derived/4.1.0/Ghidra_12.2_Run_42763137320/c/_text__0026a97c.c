/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026a97c; name: FUN_.text__0026a97c
 */


void FUN__text__0026a97c(long param_1)

{
  code *pcVar1;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (code *)0x0;
  if (*(code **)(param_1 + 0x660) != (code *)0x0) {
    (**(code **)(param_1 + 0x660))(param_1 + 0x670,auStack_80);
    local_a0 = *(undefined8 *)(param_1 + 0x650);
    local_98 = *(code **)(param_1 + 0x658);
    local_90 = *(undefined8 *)(param_1 + 0x660);
    uStack_88 = *(undefined8 *)(param_1 + 0x668);
  }
  FUN__text__0012c3b0(param_1 + 0x110,0x713a5f,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


