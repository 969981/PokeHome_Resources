/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E9090
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9090; name: FUN_.text__005e9090
 */


void FUN__text__005e9090(MutexType *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::InitializeMutex(param_1,false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(param_1 + 0x20) = (ulong)(param_1 + 0x202f) & 0xffffffffffffe000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  do { // [自动静态注释] 循环/迭代
    lVar5 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (uint)((int)lVar2 + (int)lVar5) >> 0xd & 0x7f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 != 0x7f) { // [自动静态注释] 条件判断/分支
      uVar3 = (undefined4)lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(lVar5 + lVar2) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        if (*(int *)(param_1 + 0x2c) == -1) { // [自动静态注释] 条件判断/分支
LAB__text__005e90ec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined4 *)(param_1 + 0x2c) = uVar3;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(lVar5 + lVar2) = 0xffffffff;
        if (*(int *)(param_1 + 0x2c) != -1) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x2c) * 0x2000) =
               uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          goto LAB__text__005e90ec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = lVar2 + 0x2000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0x80) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


