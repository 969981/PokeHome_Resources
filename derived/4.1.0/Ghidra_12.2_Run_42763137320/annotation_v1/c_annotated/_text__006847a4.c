/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005847A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006847a4; name: FUN_.text__006847a4
 */


undefined8 FUN__text__006847a4(long *param_1,ulong *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 0x20)) < *param_2) { // [自动静态注释] 条件判断/分支
    uVar3 = 0xfffffdf6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (ulong *)param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + -9;
    FUN__text__00683cb4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*puVar5 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = *(undefined8 *)(lVar4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar2 = (undefined8 *)(puVar5[1] + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__00679974(uVar3,*(undefined2 *)(puVar2 + 1)); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar1 = *(long *)(lVar4 + 0x20) + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(lVar4 + 0x20) = lVar1;
        uVar3 = FUN__text__00679e18(lVar1,*puVar2,puVar2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = lVar6 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar7 < *puVar5); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


