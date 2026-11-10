/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00137014
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00237014; name: FUN_.text__00237014
 */


void FUN__text__00237014(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x760) != '\0') { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x760) = 0;
    local_38 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(*(long *)(param_1 + 0x640) + 4) = 0;
    FUN__text__00128ca0(param_1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00128ec0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar2 = *(code **)(param_1 + 0x2e48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x2e50) = 0;
    *(undefined8 *)(param_1 + 0x2e58) = 0;
    *(undefined8 *)(param_1 + 0x2e40) = 0;
    *(undefined8 *)(param_1 + 0x2e48) = 0;
    (*pcVar2)(param_1 + 0x2e60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_2[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x2e60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x2e48) = param_2[1];
    *(undefined8 *)(param_1 + 0x2e58) = uVar1;
    uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x2e50) = param_2[2];
    *(undefined8 *)(param_1 + 0x2e40) = uVar1;
  } // [自动静态注释] 作用域/控制流边界
  local_38 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = 0xa393a9f060c3e94b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


