/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028f338; name: FUN_.text__0028f338
 */


void FUN__text__0028f338(long param_1,uint param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined8 local_40;
  undefined4 local_38;
  
  pcVar1 = *(code **)(param_1 + 0x658);
  local_38 = 0;
  local_40 = 0;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    (*pcVar1)(param_1 + 0x670);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x670);
    uVar2 = param_3[3];
    *(undefined8 *)(param_1 + 0x658) = param_3[1];
    *(undefined8 *)(param_1 + 0x668) = uVar2;
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0x660) = param_3[2];
    *(undefined8 *)(param_1 + 0x650) = uVar2;
  }
  local_c0 = FUN__text__0028f5d8;
  local_b8 = FUN__text__0028f614;
  local_b0 = &LAB__text__0028f618;
  local_a8 = &LAB__text__0028f624;
  alStack_a0[0] = param_1;
  if (param_2 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0028f3f4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0028f400 + (ulong)*(byte *)((ulong)param_2 + 0x730ed1) * 4))();
    return;
  }
  FUN__text__001364d0(0x7167dd,*(undefined8 *)(param_1 + 0x60),&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(alStack_a0);
  }
  return;
}


