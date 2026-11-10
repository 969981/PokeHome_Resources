/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005C134
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015c134; name: FUN_.text__0015c134
 */


void FUN__text__0015c134(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_60 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar3 = (char *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar1 = strlen(pcVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = acStack_60 + -(sVar1 + 0x10 & 0xfffffffffffffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = pcVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar3 = strcpy(pcVar2,pcVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar3 = strrchr(pcVar3,0x2e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar2 = strrchr(pcVar2,0x2f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 < pcVar3) { // [自动静态注释] 条件判断/分支
    *pcVar3 = '\0';
  } // [自动静态注释] 作用域/控制流边界
  if (param_4 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0015c1c8 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0015c1d4 + (ulong)*(byte *)((ulong)param_4 + 0x725186) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0015c4e0(local_58,&local_48,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005dd198(param_1,local_58,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_58[0] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


