/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D8E58
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8e58; name: FUN_.text__004d8e58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004d8e58(undefined8 *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = _DAT_008a4630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004aa040(*_DAT_008a4630,*(undefined4 *)((long)param_1 + 0x14),&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_40 != 0) { // [自动静态注释] 条件判断/分支
      iVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_40,param_1[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
        FUN__text__004aa280(*puVar1,*(undefined4 *)((long)param_1 + 0x14),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        *param_1 = local_48;
        param_1[1] = local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__004aa280(*puVar1,*(undefined4 *)((long)param_1 + 0x14),&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


