/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BD630
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd630; name: FUN_.text__004bd630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004bd630(long param_1,undefined4 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*(uint *)(param_1 + 0x48) | 2) == 2) && (*(int *)(param_1 + 0xa8) == 0)) { // [自动静态注释] 条件判断/分支
    local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x48) = 1;
    puVar1 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__004bd4a0(param_1,&local_44,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar4 = *(int **)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0040c060(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if (piVar4 != (int *)0x0) { // [自动静态注释] 条件判断/分支
        *piVar4 = *piVar4 + 1;
      } // [自动静态注释] 作用域/控制流边界
      *(int **)(param_1 + 0x58) = piVar4;
      if ((iVar2 == 0) || // [自动静态注释] 条件判断/分支
         (iVar3 = FUN__text__004bd720(param_1,iVar2,local_44,param_2,param_3), iVar3 == 1)) break; // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0048d2a0(*puVar1,*(undefined4 *)(param_1 + 0x6c),iVar2,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


