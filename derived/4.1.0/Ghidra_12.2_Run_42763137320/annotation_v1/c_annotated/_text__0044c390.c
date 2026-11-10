/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034C390
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044c390; name: FUN_.text__0044c390
 */


undefined4 FUN__text__0044c390(long param_1,ulong param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = *(uint *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    iVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar1 = (uVar5 >> 1) + iVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = (ulong *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (uint)puVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar8 == param_2 && uVar2 == param_3) { // [自动静态注释] 条件判断/分支
        return *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18 + 0x10); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar8 < param_2) || // [自动静态注释] 条件判断/分支
         (uVar4 = uVar5, uVar3 = uVar5 >> 1, uVar8 == param_2 && uVar2 < param_3)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar6 = iVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = uVar4 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar5 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0x3f800000; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


