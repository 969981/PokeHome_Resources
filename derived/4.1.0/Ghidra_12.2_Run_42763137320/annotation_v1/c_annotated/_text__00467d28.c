/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00367D28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467d28; name: FUN_.text__00467d28
 */


void FUN__text__00467d28(long *param_1,uint param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1[0x16] == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__004ceab0(param_1 + 0x17,param_3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = param_1[0x16] + (ulong)param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined4 *)(lVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = *(char *)(lVar2 + 9) != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__004ceab0(param_1 + 0x17,param_3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(lVar2 + (ulong)param_2 * 8 + 0x28) != '\0') { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = lVar2 + (ulong)param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar2 + 0x24) = uVar3;
    *(bool *)(lVar2 + 0x29) = bVar1;
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004cf770(param_1 + 0x17,param_2,uVar3,bVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00467da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


