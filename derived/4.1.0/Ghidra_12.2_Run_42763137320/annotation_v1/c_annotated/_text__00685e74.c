/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00585E74
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685e74; name: FUN_.text__00685e74
 */


undefined8 FUN__text__00685e74(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  lVar3 = *(long *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd0);
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      *(long *)(lVar3 + 0x70) = param_2;
      if ((*(char *)(lVar3 + 0xe6) != '\0') && // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__00685f20(param_2,param_1,lVar3), (int)uVar2 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar3 = *(long *)(lVar3 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0); // [自动静态注释] 循环/迭代
    if ((((*(long *)(param_2 + 0xa8) != 0) && ((*(byte *)(param_2 + 0xe4) & 0xc) == 0)) || // [自动静态注释] 条件判断/分支
        (iVar1 = FUN__text__00685a20(param_2 + 0x18), iVar1 == 0)) && // [自动静态注释] 调用尚未恢复正式名称的函数
       (uVar2 = FUN__text__00685f68(param_1,param_2), (int)uVar2 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


