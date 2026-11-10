/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00580598
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680598; name: FUN_.text__00680598
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00680598(long param_1,int *param_2,int *param_3,char param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (0x7fffffffU - param_6 < (ulong)(long)*param_2) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00679ef8(param_1,*(undefined4 *)(param_1 + 0x93c),3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = *param_2 + (int)param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = iVar1;
  if (param_4 == '\0') { // [自动静态注释] 条件判断/分支
    if (*param_3 <= iVar1) { // [自动静态注释] 条件判断/分支
      iVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = FUN__text__00679b44(param_7,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((int)uVar2 != 0) && (uVar2 = FUN__text__0067f9fc(param_1,0,param_5,iVar1), (int)uVar2 == 0) // [自动静态注释] 条件判断/分支
       ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *param_3 = *param_3 - iVar1;
      *param_2 = *param_2 - iVar1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


