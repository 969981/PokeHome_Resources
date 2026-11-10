/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D8F20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8f20; name: FUN_.text__004d8f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004d8f20(long param_1,long param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a4630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)*(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (*(long *)(lVar6 + 8) == param_2) { // [自动静态注释] 条件判断/分支
      uVar4 = (**(code **)(*param_3 + 0x28))(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__004aa040(*puVar1,*(undefined4 *)(lVar6 + 0x1c),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_50 == 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      iVar2 = (**(code **)(*param_3 + 0x30))(param_3,local_50,*(undefined8 *)(lVar6 + 0x10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
        FUN__text__004aa280(uVar3,*(undefined4 *)(lVar6 + 0x1c),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__004aa280(uVar3,*(undefined4 *)(lVar6 + 0x1c),(long *)(lVar6 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(lVar6 + 0x10) = local_50;
      *(undefined8 *)(lVar6 + 8) = local_58;
      lVar5 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = (ulong)*(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = lVar6 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 == lVar5 + uVar4 * 0x20) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


