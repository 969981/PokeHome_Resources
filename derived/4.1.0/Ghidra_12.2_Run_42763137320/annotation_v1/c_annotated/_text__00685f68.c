/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00585F68
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685f68; name: FUN_.text__00685f68
 */


undefined8 FUN__text__00685f68(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      lVar6 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(char *)(param_2 + 0xe6) != '\0') { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = *(uint *)(param_2 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (ulong)*(uint *)(param_2 + 0xd4) + *(long *)(param_2 + 0xb0) * 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((ulong)uVar2 != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = uVar1 / uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(ulong *)(param_2 + 0x58) = uVar3 + *(long *)(lVar6 + 0x50);
      *(uint *)(param_2 + 0xd4) = (int)uVar1 - (int)uVar3 * uVar2;
      lVar5 = *(long *)(lVar6 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar6 + 0x60) = lVar5 + 1;
      *(long *)(param_2 + 0x68) = lVar5;
      uVar4 = FUN__text__00685764(lVar6 + 0x18,param_2 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar4 != 0) { // [自动静态注释] 条件判断/分支
        return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_2 + 0xe6) = 1;
      param_1 = *(long *)(lVar6 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2 = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (*(long *)(lVar6 + 0x70) != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


