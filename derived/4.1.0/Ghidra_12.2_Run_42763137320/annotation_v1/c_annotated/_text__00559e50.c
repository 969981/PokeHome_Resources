/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00459E50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00559e50; name: FUN_.text__00559e50
 */


undefined8 FUN__text__00559e50(long *param_1,long *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = (ulong)(((uint)(param_3 >> 1) & 0x7fffffff) + 1) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,lVar2,0x71971e,0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,lVar2,0x71971e,0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        fVar5 = (float)(int)((float)(param_3 & 0xffffffff) * 0.5) * 6.2831855 * (float)uVar3 * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (1.0 / (float)(param_3 & 0xffffffff)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar4 = sinf(fVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar5 = cosf(fVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(*param_1 + lVar2 + 4) = fVar4;
        *(float *)(*param_1 + lVar2) = fVar5;
        *(float *)(param_1[1] + lVar2 + 4) = -fVar4;
        *(float *)(param_1[1] + lVar2) = fVar5;
        lVar2 = lVar2 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((param_3 & 0xfffffffe) * 4 + 8 != lVar2); // [自动静态注释] 循环/迭代
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


