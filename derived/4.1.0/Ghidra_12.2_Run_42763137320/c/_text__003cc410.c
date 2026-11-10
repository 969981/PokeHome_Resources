/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cc410; name: FUN_.text__003cc410
 */


/* WARNING: Removing unreachable block (ram,0x003cc61c) */
/* WARNING: Removing unreachable block (ram,0x003cc638) */

void FUN__text__003cc410(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = param_2;
  FUN__text__0013064c(&local_78,&local_48);
  if (((param_3 & 1) != 0) && (param_4 - 2U < 9)) {
                    /* WARNING: Could not emulate address calculation at 0x003cc478 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003cc484 + (ulong)*(byte *)((ulong)(param_4 - 2U) + 0x73a8d0) * 4))();
    return;
  }
  param_1[3] = local_60;
  param_1[4] = local_58;
  param_1[1] = local_70;
  param_1[2] = local_68;
  *(undefined4 *)(param_1 + 5) = local_50;
  if (local_60 == 0) {
    *param_1 = local_78;
  }
  else {
    *param_1 = local_78;
  }
  return;
}


