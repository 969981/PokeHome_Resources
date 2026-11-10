/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FB000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fb000; name: FUN_.text__004fb000
 */


void FUN__text__004fb000(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 auStack_210 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = (long)auStack_210 + (0x200 - (uVar4 * 4 + 0xf & 0x7fffffff0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    lVar5 = *(long *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 1) { // [自动静态注释] 条件判断/分支
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = (undefined4 *)(lVar5 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar1 = (undefined4 *)(lVar3 + uVar6 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = uVar6 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar1 = puVar7[-0x12];
        puVar1[1] = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar7 = puVar7 + 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((uVar4 & 0xfffffffe) != uVar6); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar3 + uVar6 * 4) = *(undefined4 *)(lVar5 + uVar6 * 0x48 + 8);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004cc734(*(long *)(param_1 + 0x78) + 0x150, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x20),lVar3,uVar4,0,0,0);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


