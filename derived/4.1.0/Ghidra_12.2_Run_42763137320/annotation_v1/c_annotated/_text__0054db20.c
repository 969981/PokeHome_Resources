/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044DB20
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054db20; name: FUN_.text__0054db20
 */


void FUN__text__0054db20(undefined8 param_1,ulong param_2,float *param_3,void *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float *pfVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memset(param_4,0,(param_2 & 0xff) << 2); // [自动静态注释] 内存复制、清零或移动
  if ((uint)param_3[2] < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0054db74 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0054db80 + (ulong)*(byte *)((ulong)(uint)param_3[2] + 0x73e376) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((param_2 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
    if ((param_2 & 0xff) == 1) { // [自动静态注释] 条件判断/分支
      lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pfVar1 = (float *)((long)param_4 + lVar2 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = lVar2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *pfVar1 = *pfVar1 + *param_3;
        pfVar1[1] = pfVar1[1] + *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((param_2 & 0xff) - (param_2 & 1) != lVar2); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if ((param_2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      *(float *)((long)param_4 + lVar2 * 4) = *(float *)((long)param_4 + lVar2 * 4) + *param_3;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


