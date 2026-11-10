/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CFE18
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfe18; name: FUN_.text__004cfe18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cfe18(undefined4 param_1,long param_2,ulong param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = (float)FUN__text__0045ded0(*(undefined8 *)(param_2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_2 + 0x18) = param_1;
  fVar3 = (float)FUN__text__0045ded0(*(undefined8 *)(param_2 + 8),param_3 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_2 + 0x1c) != '\0') { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_2 + 0x18) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0045fc80(*(undefined8 *)(param_2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (fVar3 - fVar2 != 0.0) { // [自动静态注释] 条件判断/分支
    plVar1 = *(long **)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_4c = (undefined4)plVar1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar1 + 0x240)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (fVar3,fVar3 - fVar2,plVar1,*(undefined4 *)(_DAT_008a4ac8 + param_3 * 4),&local_4c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


