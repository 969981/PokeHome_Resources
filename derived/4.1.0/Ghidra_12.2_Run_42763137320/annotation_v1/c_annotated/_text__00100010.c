/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：_init
 * 用途/行为：Ghidra 保留符号名称 _init；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100010; name: _init
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _init(EVP_PKEY_CTX *ctx) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((_DAT_008aa000 == 0) && // [自动静态注释] 条件判断/分支
     (_DAT_008aa000 = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           end(_DAT_0089f1d8,_DAT_0089f1e0,_DAT_0089f1e8,_DAT_0089f1f0,_DAT_0089f1f8,_DAT_0089f200, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               _DAT_0089f210,_DAT_0089f218,_DAT_0089f228,_DAT_0089f220,_DAT_0089f1d0,_DAT_0089f208, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               _DAT_0089f1c8,_DAT_0089f1c0,_DAT_0089f1b8,_DAT_0089f1b0,_DAT_0089f1a8,_DAT_0089f1a0, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               _DAT_0089f198,_DAT_0089f190,_DAT_0089f188), _DAT_008aa000 == 1)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = nn::ro::ProtectRelro // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    (_DAT_0089f230,_DAT_0089f238,_DAT_0089f240,_DAT_0089f248,_DAT_0089f250); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar1 = _DAT_0089f258; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (_DAT_0089f260 < _DAT_0089f258) { // [自动静态注释] 条件判断/分支
    puVar3 = _DAT_0089f260; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar4 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = (*(code *)*puVar3)(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar4 < puVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return iVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


