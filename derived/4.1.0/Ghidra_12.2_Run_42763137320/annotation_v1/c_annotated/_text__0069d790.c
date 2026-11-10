/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059D790
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d790; name: FUN_.text__0069d790
 */


void FUN__text__0069d790(byte *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar3 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 8) != 0) { // [自动静态注释] 条件判断/分支
    bVar4 = SBORROW4((uint)*param_1,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (int)(*param_1 - param_2) < 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (bVar3 == bVar4) { // [自动静态注释] 条件判断/分支
    bVar2 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((int)(uint)bVar2 < (int)param_2) { // [自动静态注释] 条件判断/分支
      lVar5 = (ulong)bVar2 << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = (ulong)param_2 - (ulong)bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar6 = lVar6 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar5) = 0;
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + 8) = 0x3f800000;
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + 0x10) = 0x3f80000000000000;
        lVar1 = *(long *)(param_1 + 8) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar5 = lVar5 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar1 + 0x18) = 0x3f8000003f800000;
      } while (lVar6 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = (byte)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


